create table ibamslaf
(
  ibmsmenu    varchar2(3) default ' ' not null,
  ibmsselc    varchar2(3) default ' ' not null,
  ibmstype    number(1,0) default 0 not null,
  ibmsnumb    varchar2(3) default ' ' not null,
  ibmscomd    varchar2(30) default ' ' not null,
  ibmsdbcd    varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibamsla1 primary key( 
ibmsmenu,
ibmsselc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibamsla2 on ibamslaf
(
ibmsmenu,
ibmsnumb,
ibmsselc
)
  tablespace pas_indx; 
