import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/laptop3/UoM/SoftwareForRobotics/coursework/coursework2/install/chrono_guardian_bridge_pkg'
