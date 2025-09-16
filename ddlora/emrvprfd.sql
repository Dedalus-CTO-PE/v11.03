create table emrvpraf
(
  demvpadm    varchar2(8) default ' ' not null,
  emvpcode    varchar2(9) default ' ' not null,
  emvpsend    varchar2(1) default ' ' not null,
  emvpspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrvpra1 primary key( 
demvpadm,
emvpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
