create table hl7wexaf
(
  dhlwxmsg    varchar2(20) default ' ' not null,
  hlwxspar    varchar2(10) default ' ' not null,
  hlwxmesg    number(20,0) default 0 not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7wexa1 primary key( 
dhlwxmsg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
