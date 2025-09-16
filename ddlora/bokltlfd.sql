create table bokltlaf
(
  bkllseid    varchar2(4) default ' ' not null,
  bkllbook    varchar2(8) default ' ' not null,
  bkllstat    varchar2(1) default ' ' not null,
  bkllspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokltla1 primary key( 
bkllseid,
bkllbook)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
