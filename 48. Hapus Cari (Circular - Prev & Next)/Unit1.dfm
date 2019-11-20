object Form1: TForm1
  Left = 203
  Top = 131
  Width = 226
  Height = 510
  Caption = 'Form1'
  Color = clSkyBlue
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label5: TLabel
    Left = 144
    Top = 424
    Width = 36
    Height = 24
    Caption = 'Jack'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Jokerman'
    Font.Style = []
    ParentFont = False
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 8
    Width = 169
    Height = 81
    Caption = 'Description'
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 16
      Width = 120
      Height = 24
      Caption = 'Hapus Cari'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Consolas'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 0
      Top = 48
      Width = 170
      Height = 22
      Caption = '(Circular Double)'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Consolas'
      Font.Style = []
      ParentFont = False
    end
  end
  object GroupBox2: TGroupBox
    Left = 16
    Top = 328
    Width = 169
    Height = 81
    TabOrder = 1
    object Label3: TLabel
      Left = 25
      Top = 16
      Width = 120
      Height = 24
      Caption = '1210962025'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Consolas'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 13
      Top = 48
      Width = 140
      Height = 22
      Caption = 'Hidayat Riva'#39'i'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Consolas'
      Font.Style = []
      ParentFont = False
    end
  end
  object GroupBox3: TGroupBox
    Left = 16
    Top = 96
    Width = 169
    Height = 225
    TabOrder = 2
    object Edit1: TEdit
      Left = 24
      Top = 16
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object ListBox1: TListBox
      Left = 24
      Top = 80
      Width = 121
      Height = 97
      ItemHeight = 13
      TabOrder = 1
    end
    object Input: TButton
      Left = 56
      Top = 48
      Width = 57
      Height = 25
      Caption = 'Input'
      TabOrder = 2
      OnClick = InputClick
    end
    object A: TButton
      Left = 24
      Top = 48
      Width = 25
      Height = 25
      Caption = 'A'
      Enabled = False
      TabOrder = 3
      OnClick = AClick
    end
    object V: TButton
      Left = 120
      Top = 48
      Width = 27
      Height = 25
      Caption = 'V'
      Enabled = False
      TabOrder = 4
      OnClick = VClick
    end
    object Hapus: TButton
      Left = 48
      Top = 184
      Width = 73
      Height = 33
      Caption = 'Hapus'
      Enabled = False
      TabOrder = 5
      OnClick = HapusClick
    end
  end
end
