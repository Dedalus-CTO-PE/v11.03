create table clacodaf
(
  cacdcatg    varchar2(2) default ' ' not null,
  cacdcode    varchar2(3) default ' ' not null,
  cacddesc    varchar2(20) default ' ' not null,
  cacdspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint clacoda1 primary key( 
cacdcatg,
cacdcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
