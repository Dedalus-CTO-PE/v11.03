create table pcpfrbaf
(
  pcfbcode    varchar2(9) default ' ' not null,
  pcfbshft    varchar2(3) default ' ' not null,
  pcfbnumb    number(3,0) default 0 not null,
  pcfbspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpfrba1 primary key( 
pcfbcode,
pcfbshft)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
