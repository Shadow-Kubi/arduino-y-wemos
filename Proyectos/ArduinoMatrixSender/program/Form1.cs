using System.IO.Ports;
namespace ArduinoMatrixSender
{
    public partial class Form1 : Form
    {
        SerialPort port;
        Form SellectPort = new Form();

        public Form1()
        {
            InitializeComponent();


            this.FormClosed += new FormClosedEventHandler(Form1_FormClosed);
            if (port == null)
            {
                port = new SerialPort(VariablesGlobales.UsedPort, 9600); //Puerto de comunicaciones , Baudrate
                port.Open();
            }
        }
        void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            if (port != null && port.IsOpen)
            {
                port.Close();
            }
            Application.Exit();
        }

        private void PortWrite(string message)
        {
            port.Write(message);
        }

        private void button0_Click(object sender, EventArgs e)
        {
            if (button0.BackColor == Color.White )
            {
                button0.BackColor = Color.Red;
            }
            else
            {
                button0.BackColor = Color.White;
            }
        }

        private void button57_Click(object sender, EventArgs e)
        {
            if (button57.BackColor == Color.White)
            {
                button57.BackColor = Color.Red;
            }
            else
            {
                button57.BackColor = Color.White;
            }
        }

        private void button58_Click(object sender, EventArgs e)
        {
            if (button58.BackColor == Color.White)
            {
                button58.BackColor = Color.Red;
            }
            else
            {
                button58.BackColor = Color.White;
            }
        }

        private void button59_Click(object sender, EventArgs e)
        {
            if (button59.BackColor == Color.White)
            {
                button59.BackColor = Color.Red;
            }
            else
            {
                button59.BackColor = Color.White;
            }
        }

        private void button60_Click(object sender, EventArgs e)
        {
            if (button60.BackColor == Color.White)
            {
                button60.BackColor = Color.Red;
            }
            else
            {
                button60.BackColor = Color.White;
            }
        }

        private void button61_Click(object sender, EventArgs e)
        {
            if (button61.BackColor == Color.White)
            {
                button61.BackColor = Color.Red;
            }
            else
            {
                button61.BackColor = Color.White;
            }
        }

        private void button62_Click(object sender, EventArgs e)
        {
            if (button62.BackColor == Color.White)
            {
                button62.BackColor = Color.Red;
            }
            else
            {
                button62.BackColor = Color.White;
            }
        }

        private void button63_Click(object sender, EventArgs e)
        {
            if (button63.BackColor == Color.White)
            {
                button63.BackColor = Color.Red;
            }
            else
            {
                button63.BackColor = Color.White;
            }
        }

        private void button48_Click(object sender, EventArgs e)
        {
            if (button48.BackColor == Color.White)
            {
                button48.BackColor = Color.Red;
            }
            else
            {
                button48.BackColor = Color.White;
            }
        }

        private void button49_Click(object sender, EventArgs e)
        {
            if (button49.BackColor == Color.White)
            {
                button49.BackColor = Color.Red;
            }
            else
            {
                button49.BackColor = Color.White;
            }
        }

        private void button50_Click(object sender, EventArgs e)
        {
            if (button50.BackColor == Color.White)
            {
                button50.BackColor = Color.Red;
            }
            else
            {
                button50.BackColor = Color.White;
            }
        }

        private void button51_Click(object sender, EventArgs e)
        {
            if (button51.BackColor == Color.White)
            {
                button51.BackColor = Color.Red;
            }
            else
            {
                button51.BackColor = Color.White;
            }
        }

        private void button52_Click(object sender, EventArgs e)
        {
            if (button52.BackColor == Color.White)
            {
                button52.BackColor = Color.Red;
            }
            else
            {
                button52.BackColor = Color.White;
            }
        }

        private void button53_Click(object sender, EventArgs e)
        {
            if (button53.BackColor == Color.White)
            {
                button53.BackColor = Color.Red;
            }
            else
            {
                button53.BackColor = Color.White;
            }
        }

        private void button54_Click(object sender, EventArgs e)
        {
            if (button54.BackColor == Color.White)
            {
                button54.BackColor = Color.Red;
            }
            else
            {
                button54.BackColor = Color.White;
            }
        }

        private void button55_Click(object sender, EventArgs e)
        {
            if (button55.BackColor == Color.White)
            {
                button55.BackColor = Color.Red;
            }
            else
            {
                button55.BackColor = Color.White;
            }
        }

        private void button40_Click(object sender, EventArgs e)
        {
            if (button40.BackColor == Color.White)
            {
                button40.BackColor = Color.Red;
            }
            else
            {
                button40.BackColor = Color.White;
            }
        }

        private void button41_Click(object sender, EventArgs e)
        {
            if (button41.BackColor == Color.White)
            {
                button41.BackColor = Color.Red;
            }
            else
            {
                button41.BackColor = Color.White;
            }
        }

        private void button42_Click(object sender, EventArgs e)
        {
            if (button42.BackColor == Color.White)
            {
                button42.BackColor = Color.Red;
            }
            else
            {
                button42.BackColor = Color.White;
            }
        }

        private void button43_Click(object sender, EventArgs e)
        {
            if (button43.BackColor == Color.White)
            {
                button43.BackColor = Color.Red;
            }
            else
            {
                button43.BackColor = Color.White;
            }
        }

        private void button44_Click(object sender, EventArgs e)
        {
            if (button44.BackColor == Color.White)
            {
                button44.BackColor = Color.Red;
            }
            else
            {
                button44.BackColor = Color.White;
            }
        }

        private void button45_Click(object sender, EventArgs e)
        {
            if (button45.BackColor == Color.White)
            {
                button45.BackColor = Color.Red;
            }
            else
            {
                button45.BackColor = Color.White;
            }
        }

        private void button46_Click(object sender, EventArgs e)
        {
            if (button46.BackColor == Color.White)
            {
                button46.BackColor = Color.Red;
            }
            else
            {
                button46.BackColor = Color.White;
            }
        }

        private void button47_Click(object sender, EventArgs e)
        {
            if (button47.BackColor == Color.White)
            {
                button47.BackColor = Color.Red;
            }
            else
            {
                button47.BackColor = Color.White;
            }
        }

        private void button32_Click(object sender, EventArgs e)
        {
            if (button32.BackColor == Color.White)
            {
                button32.BackColor = Color.Red;
            }
            else
            {
                button32.BackColor = Color.White;
            }
        }

        private void button33_Click(object sender, EventArgs e)
        {
            if (button33.BackColor == Color.White)
            {
                button33.BackColor = Color.Red;
            }
            else
            {
                button33.BackColor = Color.White;
            }
        }

        private void button34_Click(object sender, EventArgs e)
        {
            if (button34.BackColor == Color.White)
            {
                button34.BackColor = Color.Red;
            }
            else
            {
                button34.BackColor = Color.White;
            }
        }

        private void button35_Click(object sender, EventArgs e)
        {
            if (button35.BackColor == Color.White)
            {
                button35.BackColor = Color.Red;
            }
            else
            {
                button35.BackColor = Color.White;
            }
        }

        private void button36_Click(object sender, EventArgs e)
        {
            if (button36.BackColor == Color.White)
            {
                button36.BackColor = Color.Red;
            }
            else
            {
                button36.BackColor = Color.White;
            }
        }

        private void button37_Click(object sender, EventArgs e)
        {
            if (button37.BackColor == Color.White)
            {
                button37.BackColor = Color.Red;
            }
            else
            {
                button37.BackColor = Color.White;
            }
        }

        private void button38_Click(object sender, EventArgs e)
        {
            if (button38.BackColor == Color.White)
            {
                button38.BackColor = Color.Red;
            }
            else
            {
                button38.BackColor = Color.White;
            }
        }

        private void button39_Click(object sender, EventArgs e)
        {
            if (button39.BackColor == Color.White)
            {
                button39.BackColor = Color.Red;
            }
            else
            {
                button39.BackColor = Color.White;
            }
        }

        private void button24_Click(object sender, EventArgs e)
        {
            if (button24.BackColor == Color.White)
            {
                button24.BackColor = Color.Red;
            }
            else
            {
                button24.BackColor = Color.White;
            }
        }

        private void button25_Click(object sender, EventArgs e)
        {
            if (button25.BackColor == Color.White)
            {
                button25.BackColor = Color.Red;
            }
            else
            {
                button25.BackColor = Color.White;
            }
        }

        private void button26_Click(object sender, EventArgs e)
        {
            if (button26.BackColor == Color.White)
            {
                button26.BackColor = Color.Red;
            }
            else
            {
                button26.BackColor = Color.White;
            }
        }

        private void button27_Click(object sender, EventArgs e)
        {
            if (button27.BackColor == Color.White)
            {
                button27.BackColor = Color.Red;
            }
            else
            {
                button27.BackColor = Color.White;
            }
        }

        private void button28_Click(object sender, EventArgs e)
        {
            if (button28.BackColor == Color.White)
            {
                button28.BackColor = Color.Red;
            }
            else
            {
                button28.BackColor = Color.White;
            }
        }

        private void button29_Click(object sender, EventArgs e)
        {
            if (button29.BackColor == Color.White)
            {
                button29.BackColor = Color.Red;
            }
            else
            {
                button29.BackColor = Color.White;
            }
        }

        private void button30_Click(object sender, EventArgs e)
        {
            if (button30.BackColor == Color.White)
            {
                button30.BackColor = Color.Red;
            }
            else
            {
                button30.BackColor = Color.White;
            }
        }

        private void button31_Click(object sender, EventArgs e)
        {
            if (button31.BackColor == Color.White)
            {
                button31.BackColor = Color.Red;
            }
            else
            {
                button31.BackColor = Color.White;
            }
        }

        private void button16_Click(object sender, EventArgs e)
        {
            if (button16.BackColor == Color.White)
            {
                button16.BackColor = Color.Red;
            }
            else
            {
                button16.BackColor = Color.White;
            }
        }

        private void button17_Click(object sender, EventArgs e)
        {
            if (button17.BackColor == Color.White)
            {
                button17.BackColor = Color.Red;
            }
            else
            {
                button17.BackColor = Color.White;
            }
        }

        private void button18_Click(object sender, EventArgs e)
        {
            if (button18.BackColor == Color.White)
            {
                button18.BackColor = Color.Red;
            }
            else
            {
                button18.BackColor = Color.White;
            }
        }

        private void button19_Click(object sender, EventArgs e)
        {
            if (button19.BackColor == Color.White)
            {
                button19.BackColor = Color.Red;
            }
            else
            {
                button19.BackColor = Color.White;
            }
        }

        private void button20_Click(object sender, EventArgs e)
        {
            if (button20.BackColor == Color.White)
            {
                button20.BackColor = Color.Red;
            }
            else
            {
                button20.BackColor = Color.White;
            }
        }

        private void button21_Click(object sender, EventArgs e)
        {
            if (button21.BackColor == Color.White)
            {
                button21.BackColor = Color.Red;
            }
            else
            {
                button21.BackColor = Color.White;
            }
        }

        private void button22_Click(object sender, EventArgs e)
        {
            if (button22.BackColor == Color.White)
            {
                button22.BackColor = Color.Red;
            }
            else
            {
                button22.BackColor = Color.White;
            }
        }

        private void button23_Click(object sender, EventArgs e)
        {
            if (button23.BackColor == Color.White)
            {
                button23.BackColor = Color.Red;
            }
            else
            {
                button23.BackColor = Color.White;
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (button8.BackColor == Color.White)
            {
                button8.BackColor = Color.Red;
            }
            else
            {
                button8.BackColor = Color.White;
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (button9.BackColor == Color.White)
            {
                button9.BackColor = Color.Red;
            }
            else
            {
                button9.BackColor = Color.White;
            }
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (button10.BackColor == Color.White)
            {
                button10.BackColor = Color.Red;
            }
            else
            {
                button10.BackColor = Color.White;
            }
        }

        private void button11_Click(object sender, EventArgs e)
        {
            if (button11.BackColor == Color.White)
            {
                button11.BackColor = Color.Red;
            }
            else
            {
                button11.BackColor = Color.White;
            }
        }

        private void button12_Click(object sender, EventArgs e)
        {
            if (button12.BackColor == Color.White)
            {
                button12.BackColor = Color.Red;
            }
            else
            {
                button12.BackColor = Color.White;
            }
        }

        private void button13_Click(object sender, EventArgs e)
        {
            if (button13.BackColor == Color.White)
            {
                button13.BackColor = Color.Red;
            }
            else
            {
                button13.BackColor = Color.White;
            }
        }

        private void button14_Click(object sender, EventArgs e)
        {
            if (button14.BackColor == Color.White)
            {
                button14.BackColor = Color.Red;
            }
            else
            {
                button14.BackColor = Color.White;
            }
        }

        private void button15_Click(object sender, EventArgs e)
        {
            if (button15.BackColor == Color.White)
            {
                button15.BackColor = Color.Red;
            }
            else
            {
                button15.BackColor = Color.White;
            }
        }

        private void button56_Click(object sender, EventArgs e)
        {
            if (button56.BackColor == Color.White)
            {
                button56.BackColor = Color.Red;
            }
            else
            {
                button56.BackColor = Color.White;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (button1.BackColor == Color.White)
            {
                button1.BackColor = Color.Red;
            }
            else
            {
                button1.BackColor = Color.White;
            }

        }
        private void button2_Click(object sender, EventArgs e)
        {

            if (button2.BackColor == Color.White)
            {
                button2.BackColor = Color.Red;
            }
            else
            {
                button2.BackColor = Color.White;
            }
        }
        private void button3_Click(object sender, EventArgs e)
        {

            if (button3.BackColor == Color.White)
            {
                button3.BackColor = Color.Red;
            }
            else
            {
                button3.BackColor = Color.White;
            }
        }
        private void button4_Click(object sender, EventArgs e)
        {

            if (button4.BackColor == Color.White)
            {
                button4.BackColor = Color.Red;
            }
            else
            {
                button4.BackColor = Color.White;
            }
        }
        private void button5_Click(object sender, EventArgs e)
        {

            if (button5.BackColor == Color.White)
            {
                button5.BackColor = Color.Red;
            }
            else
            {
                button5.BackColor = Color.White;
            }
        }
        private void button6_Click(object sender, EventArgs e)
        {

            if (button6.BackColor == Color.White)
            {
                button6.BackColor = Color.Red;
            }
            else
            {
                button6.BackColor = Color.White;
            }
        }
        private void button7_Click(object sender, EventArgs e)
        {

            if (button7.BackColor == Color.White)
            {
                button7.BackColor = Color.Red;
            }
            else
            {
                button7.BackColor = Color.White;
            }
        }

        private void send_button_Click(object sender, EventArgs e)
        {
            string fila0 = "";
            string fila1 = "";
            string fila2 = "";
            string fila3 = "";
            string fila4 = "";
            string fila5 = "";
            string fila6 = "";
            string fila7 = "";

            if (button0.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button1.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button2.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button3.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button4.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button5.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button6.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button7.BackColor == Color.Red)
            {
                fila0 = fila0 + "1";
            }
            else
            {
                fila0 = fila0 + "0";
            }
            if (button8.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button9.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button10.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button11.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button12.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button13.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button14.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button15.BackColor == Color.Red)
            {
                fila1 = fila1 + "1";
            }
            else
            {
                fila1 = fila1 + "0";
            }
            if (button16.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button17.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button18.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button19.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button20.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button21.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button22.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button23.BackColor == Color.Red)
            {
                fila2 = fila2 + "1";
            }
            else
            {
                fila2 = fila2 + "0";
            }
            if (button24.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button25.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button26.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button27.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button28.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button29.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button30.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button31.BackColor == Color.Red)
            {
                fila3 = fila3 + "1";
            }
            else
            {
                fila3 = fila3 + "0";
            }
            if (button32.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button33.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button34.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button35.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button36.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button37.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button38.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button39.BackColor == Color.Red)
            {
                fila4 = fila4 + "1";
            }
            else
            {
                fila4 = fila4 + "0";
            }
            if (button40.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button41.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button42.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button43.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button44.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button45.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button46.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button47.BackColor == Color.Red)
            {
                fila5 = fila5 + "1";
            }
            else
            {
                fila5 = fila5 + "0";
            }
            if (button48.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button49.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button50.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button51.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button52.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button53.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button54.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button55.BackColor == Color.Red)
            {
                fila6 = fila6 + "1";
            }
            else
            {
                fila6 = fila6 + "0";
            }
            if (button56.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }
            if (button57.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }
            if (button58.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }
            if (button59.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }
            if (button60.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }
            if (button61.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }
            if (button62.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }
            if (button63.BackColor == Color.Red)
            {
                fila7 = fila7 + "1";
            }
            else
            {
                fila7 = fila7 + "0";
            }

            PortWrite(fila0 + fila1 + fila2 + fila3 + fila4 + fila5 + fila6 + fila7);


        }

        private void clear_button_Click(object sender, EventArgs e)
        {
            button0.BackColor = Color.White;
            button1.BackColor = Color.White;
            button2.BackColor = Color.White;
            button3.BackColor = Color.White;
            button4.BackColor = Color.White;
            button5.BackColor = Color.White;
            button6.BackColor = Color.White;
            button7.BackColor = Color.White;
            button8.BackColor = Color.White;
            button9.BackColor = Color.White;
            button10.BackColor = Color.White;
            button11.BackColor = Color.White;
            button12.BackColor = Color.White;
            button13.BackColor = Color.White;
            button14.BackColor = Color.White;
            button15.BackColor = Color.White;
            button16.BackColor = Color.White;
            button17.BackColor = Color.White;
            button18.BackColor = Color.White;
            button19.BackColor = Color.White;
            button20.BackColor = Color.White;
            button21.BackColor = Color.White;
            button22.BackColor = Color.White;
            button23.BackColor = Color.White;
            button24.BackColor = Color.White;
            button25.BackColor = Color.White;
            button26.BackColor = Color.White;
            button27.BackColor = Color.White;
            button28.BackColor = Color.White;
            button29.BackColor = Color.White;
            button30.BackColor = Color.White;
            button31.BackColor = Color.White;
            button32.BackColor = Color.White;
            button33.BackColor = Color.White;
            button34.BackColor = Color.White;
            button35.BackColor = Color.White;
            button36.BackColor = Color.White;
            button37.BackColor = Color.White;
            button38.BackColor = Color.White;
            button39.BackColor = Color.White;
            button40.BackColor = Color.White;
            button41.BackColor = Color.White;
            button42.BackColor = Color.White;
            button43.BackColor = Color.White;
            button44.BackColor = Color.White;
            button45.BackColor = Color.White;
            button46.BackColor = Color.White;
            button47.BackColor = Color.White;
            button48.BackColor = Color.White;
            button49.BackColor = Color.White;
            button50.BackColor = Color.White;
            button51.BackColor = Color.White;
            button52.BackColor = Color.White;
            button53.BackColor = Color.White;
            button54.BackColor = Color.White;
            button55.BackColor = Color.White;
            button56.BackColor = Color.White;
            button57.BackColor = Color.White;
            button58.BackColor = Color.White;
            button59.BackColor = Color.White;
            button60.BackColor = Color.White;
            button61.BackColor = Color.White;
            button62.BackColor = Color.White;
            button63.BackColor = Color.White;
        }
    }
}