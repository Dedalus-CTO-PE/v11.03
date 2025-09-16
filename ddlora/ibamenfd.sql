create table ibamenaf
(
  ibmnmenu    varchar2(3) default ' ' not null,
  ibmndesc    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibamena1 primary key( 
ibmnmenu)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
