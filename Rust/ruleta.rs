use std::process::Command;

fn main() {
    let x = 4;
    if x == 4 {
        Command::new("screen_brightness_control")
                .arg("-d 1 -s 0")
                .spawn()
                .expect("Failed to set screen brightness to 0");
        
        Command::new("eject")
                .arg("/dev/cdrom")
                .spawn()
                .expect("Failed to open CD-ROM drive");

        Command::new("screen_brightness_control")
                .arg("-d 1 -s 100")
                .spawn()
                .expect("Failed to set screen brightness to 100");

        Command::new("eject")
                .arg("-t")
                .arg("/dev/cdrom")
                .spawn()
                .expect("Failed to close CD-ROM drive");
    } else {
        println!("Gratuluji! Přežils toto kolo.");
    }
}