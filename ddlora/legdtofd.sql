create table legdtrof
(
  dlotnumb    varchar2(8) default ' ' not null,
  lotinvno    varchar2(8) default ' ' not null,
  dlottran    varchar2(6) default ' ' not null,
  lotddesc    varchar2(30) default ' ' not null,
  lotdttam    number(14,2) default 0 not null,
  lotddate    varchar2(8) default ' ' not null,
  lotitemn    varchar2(9) default ' ' not null,
  lottype     varchar2(2) default ' ' not null,
  lotpayty    number(1,0) default 0 not null,
  lotrecep    varchar2(12) default ' ' not null,
  lotinvpr    number(1,0) default 0 not null,
  dlotrect    varchar2(1) default ' ' not null,
  lotchgdt    varchar2(8) default ' ' not null,
  lotchgti    varchar2(8) default ' ' not null,
  lotmisgr    varchar2(3) default ' ' not null,
  lotdepty    varchar2(3) default ' ' not null,
  lotbatch    varchar2(8) default ' ' not null,
  lotdtppo    number(14,2) default 0 not null,
  lotdtrpo    number(14,2) default 0 not null,
  dlotninv    varchar2(1) default ' ' not null,
  lotservs    number(2,0) default 0 not null,
  lotdepfl    varchar2(1) default ' ' not null,
  loteffdt    varchar2(8) default ' ' not null,
  lotdtgst    number(1,0) default 0 not null,
  lotdtgsc    varchar2(6) default ' ' not null,
  lotdtgsa    number(14,2) default 0 not null,
  lotdtssa    varchar2(1) default ' ' not null,
  lotspare    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdtro1 primary key( 
dlotnumb,
lotinvno,
dlottran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legdtro2 on legdtrof
(
dlotrect,
lotchgdt,
dlotnumb,
dlottran
)
  tablespace pas_indx; 
create unique index legdtro3 on legdtrof
(
dlotnumb,
lotinvno,
dlotrect,
lotddate,
dlottran
)
  tablespace pas_indx; 
create unique index legdtro4 on legdtrof
(
lotdtssa,
lotinvno,
dlotrect,
dlotnumb,
dlottran
)
  tablespace pas_indx; 
