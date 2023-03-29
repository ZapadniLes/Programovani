
import configparser

config = configparser.ConfigParser()
config.read('ftp.ini')

host = config['ftp']['host']
port = config['ftp']['port']
user = config['ftp']['user']
password = config['ftp']['password']

print('ftp configuration:')

print(f'Host: {host}')
print(f'Port: {port}')
print(f'User: {user}')
print(f'Password: {password}')