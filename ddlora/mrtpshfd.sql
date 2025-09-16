create table mrtpshaf
(
  dmrpsadm    varchar2(8) default ' ' not null,
  mrpsdate    varchar2(8) default ' ' not null,
  mrpstime    varchar2(5) default ' ' not null,
  mrpsstat    varchar2(3) default ' ' not null,
  mrpscmnt    varchar2(30) default ' ' not null,
  mrpsmis1    varchar2(1) default ' ' not null,
  mrpsmis2    varchar2(1) default ' ' not null,
  mrpsmis3    varchar2(1) default ' ' not null,
  mrpsmis4    varchar2(1) default ' ' not null,
  mrpsmis5    varchar2(1) default ' ' not null,
  mrpsmis6    varchar2(1) default ' ' not null,
  mrpsftm1    varchar2(80) default ' ' not null,
  mrpsftm2    varchar2(80) default ' ' not null,
  mrpsftm3    varchar2(80) default ' ' not null,
  mrpsftm4    varchar2(80) default ' ' not null,
  mrpsftm5    varchar2(80) default ' ' not null,
  mrpsspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtpsha1 primary key( 
dmrpsadm,
mrpsdate,
mrpstime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
