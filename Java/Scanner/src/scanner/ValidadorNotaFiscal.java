package scanner;

import java.io.File;
import java.io.FileNotFoundException;
import java.nio.file.Path;
import java.util.Scanner;

public class ValidadorNotaFiscal {
    public void validarNotaFiscal(Path path) throws FileNotFoundException {
        File file = new File(path.toString());
        Scanner sc = new Scanner(file);
        while (sc.hasNextLine()) {
            System.out.println(sc.nextLine());
        }
    }
}
