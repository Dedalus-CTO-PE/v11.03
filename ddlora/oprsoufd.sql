create table oprsouaf
(
  opsodate    varchar2(6) default ' ' not null,
  opsodoct    varchar2(6) default ' ' not null,
  opsotype    varchar2(1) default ' ' not null,
  opsootyp    varchar2(3) default ' ' not null,
  dopsoaty    varchar2(1) default ' ' not null,
  dopsoown    varchar2(1) default ' ' not null,
  dopsotrn    varchar2(1) default ' ' not null,
  opsoncas    number(6,0) default 0 not null,
  opsonopr    number(6,0) default 0 not null,
  opsotime    number(6,0) default 0 not null,
  opsospar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprsoua1 primary key( 
opsodate,
opsodoct,
opsotype,
opsootyp,
dopsoaty,
dopsoown,
dopsotrn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
