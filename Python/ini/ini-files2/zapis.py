import configparser

config = configparser.ConfigParser()

config.add_section('ftp')

config['ftp']['host'] = '10.11.110'
config['ftp']['port'] = '21'
config['ftp']['user'] = 'root'
config['ftp']['password'] = 'Bagr125'

with open('ftp.ini', 'w') as configfile:
    config.write(configfile)