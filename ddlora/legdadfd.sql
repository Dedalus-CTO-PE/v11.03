create table legdadaf
(
  dlptdaad    varchar2(8) default ' ' not null,
  lptdaadt    varchar2(5) default ' ' not null,
  lptdadct    varchar2(5) default ' ' not null,
  lptdaspa    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdada1 primary key( 
dlptdaad)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
