create table patrdeaf
(
  dptrdadm    varchar2(8) default ' ' not null,
  dptrdepn    varchar2(2) default ' ' not null,
  ptrdbisa    number(3,0) default 0 not null,
  ptrdbisd    number(3,0) default 0 not null,
  ptrdclsp    varchar2(3) default ' ' not null,
  ptrdodte    varchar2(8) default ' ' not null,
  ptrdartr    varchar2(1) default ' ' not null,
  ptrdusrf    varchar2(1) default ' ' not null,
  ptrdpcsa    varchar2(1) default ' ' not null,
  ptrdpcsd    varchar2(1) default ' ' not null,
  ptrdrgaa    varchar2(2) default ' ' not null,
  ptrdrgad    varchar2(2) default ' ' not null,
  ptrdsrpc    varchar2(2) default ' ' not null,
  ptrdfima    number(3,0) default 0 not null,
  ptrdfimd    number(3,0) default 0 not null,
  ptrddiag    varchar2(5) default ' ' not null,
  ptrdcom1    varchar2(70) default ' ' not null,
  ptrdcom2    varchar2(70) default ' ' not null,
  ptrdfadt    varchar2(8) default ' ' not null,
  ptrdfddt    varchar2(8) default ' ' not null,
  ptrdimpr    varchar2(7) default ' ' not null,
  ptrdpoca    varchar2(3) default ' ' not null,
  ptrdpocd    varchar2(3) default ' ' not null,
  ptrdvers    varchar2(2) default ' ' not null,
  ptrdsnap    varchar2(3) default ' ' not null,
  ptrdspar    varchar2(45) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patrdea1 primary key( 
dptrdadm,
dptrdepn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
