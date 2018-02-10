/*
    This file is part of Helio Workstation.

    Helio is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Helio is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Helio. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "Arpeggiator.h"
#include "Serializable.h"

class ArpeggiatorsManager :
    public ChangeBroadcaster,
    private Serializable,
    private Timer
{
public:

    static ArpeggiatorsManager &getInstance()
    {
        static ArpeggiatorsManager Instance;
        return Instance;
    }
    
    void initialise(const String &commandLine);
    void shutdown();

    static File getDebugArpsFile();
    
    Array<Arpeggiator> getArps() const;
    bool replaceArpWithId(const String &id, const Arpeggiator &arp);
    void addArp(const Arpeggiator &arp);
    
private:
    
    //===------------------------------------------------------------------===//
    // Serializable
    //===------------------------------------------------------------------===//
    
    ValueTree serialize() const override;
    void deserialize(const ValueTree &tree) override;
    void reset() override;
    
private:
    
    Array<Arpeggiator> arps;
    
    ArpeggiatorsManager() {}
    void timerCallback() override;
    
    void reloadArps();

    void saveConfigArps();
    String getConfigArps();
    
private:

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ArpeggiatorsManager)

};
