public class Show {
  public native void showImage(String location) ;
  public static void main (String args[]) {
	Show ob = new Show();
	ob.showImage("//OpenCV//workspace//ShowImageJNI//logo.jpg");    
  }
  static {
	String libPath= "/OpenCV/workspace/ShowImageJNI";
	System.setProperty("java.library.path",libPath);
      	String Path = System.getProperty("java.library.path");
      	System.out.println("java.library.path=" + Path);
    	System.loadLibrary ( "Show" ) ;
  }
}
