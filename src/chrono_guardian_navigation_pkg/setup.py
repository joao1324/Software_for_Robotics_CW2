from setuptools import find_packages, setup

package_name = 'chrono_guardian_navigation_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'chrono_guardian_navigation_node = chrono_guardian_navigation_pkg.chrono_guardian_navigation_node:main'
        ],
    },
)
