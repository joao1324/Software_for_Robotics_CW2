from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'chrono_guardian_bridge_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name, 'config_bridge'), glob(os.path.join('config_bridge', '*.yaml')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='laptop3',
    maintainer_email='joao.gracio.lopes.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        ],
    },
)
