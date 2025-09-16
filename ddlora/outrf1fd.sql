create table outrf1af
(
  otrloutn    varchar2(8) default ' ' not null,
  otrlurno    varchar2(8) default ' ' not null,
  otrldate    varchar2(8) default ' ' not null,
  otrlrdoc    varchar2(10) default ' ' not null,
  otrlcons    varchar2(6) default ' ' not null,
  otrldept    varchar2(3) default ' ' not null,
  otrlprio    varchar2(3) default ' ' not null,
  otrldiag    varchar2(50) default ' ' not null,
  otrlusd1    varchar2(3) default ' ' not null,
  otrlusd2    varchar2(3) default ' ' not null,
  otrlusd3    varchar2(3) default ' ' not null,
  otrlusd4    varchar2(3) default ' ' not null,
  otrlbsit    varchar2(6) default ' ' not null,
  otrlbcli    varchar2(6) default ' ' not null,
  otrlbdte    varchar2(8) default ' ' not null,
  otrlbstr    varchar2(5) default ' ' not null,
  otrlbslt    varchar2(3) default ' ' not null,
  otrlrfgp    varchar2(10) default ' ' not null,
  otrlgppc    varchar2(10) default ' ' not null,
  otrlrqst    varchar2(20) default ' ' not null,
  otrlcdte    varchar2(8) default ' ' not null,
  otrlreas    varchar2(3) default ' ' not null,
  otrlspfc    varchar2(3) default ' ' not null,
  otrlcad1    varchar2(35) default ' ' not null,
  otrlcad2    varchar2(35) default ' ' not null,
  otrlcad3    varchar2(35) default ' ' not null,
  otrlcad4    varchar2(35) default ' ' not null,
  otrlcpc     varchar2(8) default ' ' not null,
  otrlecrn    varchar2(20) default ' ' not null,
  otrlgpfh    varchar2(20) default ' ' not null,
  otrlgppt    varchar2(2) default ' ' not null,
  otrloper    varchar2(4) default ' ' not null,
  otrlctyp    varchar2(6) default ' ' not null,
  otrlsite    varchar2(6) default ' ' not null,
  otrlsrce    varchar2(3) default ' ' not null,
  otrlrhcp    varchar2(10) default ' ' not null,
  otrldrec    varchar2(8) default ' ' not null,
  otrldpri    varchar2(8) default ' ' not null,
  otrlpurc    varchar2(3) default ' ' not null,
  otrltref    number(1,0) default 0 not null,
  otrlrank    varchar2(6) default ' ' not null,
  otrludat    varchar2(8) default ' ' not null,
  otrlutim    varchar2(8) default ' ' not null,
  otrluuid    varchar2(10) default ' ' not null,
  otrlcdat    varchar2(8) default ' ' not null,
  otrlctim    varchar2(8) default ' ' not null,
  otrlcuid    varchar2(8) default ' ' not null,
  otrlclam    varchar2(3) default ' ' not null,
  otrltrgs    varchar2(3) default ' ' not null,
  otrlspre    varchar2(33) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outrf1a1 primary key( 
otrloutn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outrf1a2 on outrf1af
(
otrlurno,
otrldate,
otrloutn
)
  tablespace pas_indx; 
create unique index outrf1a3 on outrf1af
(
otrlprio,
otrldate,
otrloutn
)
  tablespace pas_indx; 
create unique index outrf1a4 on outrf1af
(
otrlrdoc,
otrldate,
otrloutn
)
  tablespace pas_indx; 
create unique index outrf1a5 on outrf1af
(
otrlcons,
otrldate,
otrloutn
)
  tablespace pas_indx; 
create unique index outrf1a6 on outrf1af
(
otrldate,
otrloutn
)
  tablespace pas_indx; 
create unique index outrf1a7 on outrf1af
(
otrlctyp,
otrldate,
otrloutn
)
  tablespace pas_indx; 
