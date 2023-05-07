using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;



namespace ArduinoMatrixSender
{
    
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
            string[] ports = SerialPort.GetPortNames();
            comboBox1.DataSource = ports;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            VariablesGlobales.UsedPort = comboBox1.SelectedValue.ToString();
            this.Hide();
            Form Form1 = new Form1();
            Form1.Show();
        }
    }
}
