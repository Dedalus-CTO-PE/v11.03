create table fmsintaf
(
  fmincode    varchar2(3) default ' ' not null,
  fmindesc    varchar2(35) default ' ' not null,
  fmincash    varchar2(1) default ' ' not null,
  fminauth    varchar2(1) default ' ' not null,
  fmintdes    varchar2(30) default ' ' not null,
  fminref     varchar2(15) default ' ' not null,
  fmindiss    varchar2(5) default ' ' not null,
  fminresp    varchar2(4) default ' ' not null,
  fminledg    varchar2(2) default ' ' not null,
  fmincrac    varchar2(12) default ' ' not null,
  fmincraa    varchar2(12) default ' ' not null,
  fminfeei    varchar2(1) default ' ' not null,
  fminspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsinta1 primary key( 
fmincode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
