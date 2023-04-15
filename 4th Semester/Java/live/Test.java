// For running -:
// -cp option is used to set the classpath to the current directory, so that the Java compiler can find the Playable, Veena, and Saxophone classes.
/*
    1. Compile all the files
        $ javac music/Playable.java
        $ javac music/string/Veena.java
        $ javac music/wind/Saxophone.java
        $ javac -cp . live/Test.java
    2. Run the test class
        $ java -cp . live.Test
 */

package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        Veena veena = new Veena();
        veena.play();

        Saxophone saxophone = new Saxophone();
        saxophone.play();

        Playable playable1 = new Veena();
        Playable playable2 = new Saxophone();

        playable1.play();
        playable2.play();
    }
}
