FontHandle getFont ();
void releaseFont (FontHandle fh);

class Font 
{

public:
		explicit Font (FontHandle fh)
			:f (fh) {}
		~Font ()
		{
			releaseFont (f);
		}
		FontHandle get () const  // 显式转换，获取底层资源
		{
			return f;
		}
		operator FontHandle () const //隐式转换，获取底层对象
		{
			return f;
		}
private:
		FontHandle f;
};

void changeFontSize (FontHandle f, int newSize);

Font f (getFont ());
changeFontSize (f.get (), 5);// 显式转换

changeFontSize (f, 5);	//隐式转换


