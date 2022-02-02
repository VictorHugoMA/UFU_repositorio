package chainOfResponsibility;
import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.FlowLayout;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;

public class Interface extends JFrame {

	private JPanel contentPane;
	private JTextField textFieldCodigoAcaoVenda;
	private JTextField textFieldQtdAcaoVenda;
	private JTextField textFieldValorAcaoVenda;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Interface frame = new Interface();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Interface() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Mercado de Acoes");
		lblNewLabel.setBounds(166, 11, 121, 14);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Criar Ordem de Venda");
		lblNewLabel_1.setBounds(10, 42, 127, 14);
		contentPane.add(lblNewLabel_1);
		
		textFieldCodigoAcaoVenda = new JTextField();
		textFieldCodigoAcaoVenda.setToolTipText("Codigo");
		textFieldCodigoAcaoVenda.setBounds(79, 67, 86, 20);
		contentPane.add(textFieldCodigoAcaoVenda);
		textFieldCodigoAcaoVenda.setColumns(10);
		
		textFieldQtdAcaoVenda = new JTextField();
		textFieldQtdAcaoVenda.setToolTipText("Quantidade");
		textFieldQtdAcaoVenda.setColumns(10);
		textFieldQtdAcaoVenda.setBounds(79, 98, 86, 20);
		contentPane.add(textFieldQtdAcaoVenda);
		
		JLabel lblNewLabel_2 = new JLabel("Codigo:");
		lblNewLabel_2.setBounds(10, 70, 46, 14);
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_2_1 = new JLabel("Quantidade:");
		lblNewLabel_2_1.setBounds(10, 101, 62, 14);
		contentPane.add(lblNewLabel_2_1);
		
		JLabel lblNewLabel_3 = new JLabel("Valor:");
		lblNewLabel_3.setBounds(10, 132, 46, 14);
		contentPane.add(lblNewLabel_3);
		
		textFieldValorAcaoVenda = new JTextField();
		textFieldValorAcaoVenda.setToolTipText("");
		textFieldValorAcaoVenda.setColumns(10);
		textFieldValorAcaoVenda.setBounds(79, 129, 86, 20);
		contentPane.add(textFieldValorAcaoVenda);
		
		JButton btnCriarOrdemVenda = new JButton("Criar");
		btnCriarOrdemVenda.setBounds(39, 167, 89, 23);
		contentPane.add(btnCriarOrdemVenda);
		
		JButton btnCriarOrdemVenda_1 = new JButton("Criar");
		btnCriarOrdemVenda_1.setBounds(272, 167, 89, 23);
		contentPane.add(btnCriarOrdemVenda_1);
		
		JLabel lblNewLabel_1_1 = new JLabel("Criar Ordem de Compra");
		lblNewLabel_1_1.setBounds(248, 42, 127, 14);
		contentPane.add(lblNewLabel_1_1);
		
		JLabel lblNewLabel_2_2 = new JLabel("Codigo:");
		lblNewLabel_2_2.setBounds(248, 70, 46, 14);
		contentPane.add(lblNewLabel_2_2);
		
		textField = new JTextField();
		textField.setToolTipText("Codigo");
		textField.setColumns(10);
		textField.setBounds(313, 67, 86, 20);
		contentPane.add(textField);
		
		textField_1 = new JTextField();
		textField_1.setToolTipText("Quantidade");
		textField_1.setColumns(10);
		textField_1.setBounds(313, 98, 86, 20);
		contentPane.add(textField_1);
		
		textField_2 = new JTextField();
		textField_2.setToolTipText("");
		textField_2.setColumns(10);
		textField_2.setBounds(313, 129, 86, 20);
		contentPane.add(textField_2);
		
		JLabel lblNewLabel_2_1_1 = new JLabel("Quantidade:");
		lblNewLabel_2_1_1.setBounds(248, 101, 62, 14);
		contentPane.add(lblNewLabel_2_1_1);
		
		JLabel lblNewLabel_3_1 = new JLabel("Valor:");
		lblNewLabel_3_1.setBounds(248, 132, 46, 14);
		contentPane.add(lblNewLabel_3_1);
	}
}
