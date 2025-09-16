create table prifactf
(
prfadate    varchar2(8),
prfadebt    varchar2(8),
dprfascn    varchar2(2),
prfaactn    varchar2(3),
prfacomm    varchar2(60),
prfampra    varchar2(6),
prfaspar    varchar2(4),
lf          varchar2(1),
constraint prifact1 primary key( 
prfadate,
prfadebt,
dprfascn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym prifactf for prifactf;
create unique index prifact2 on prifactf
(
prfadebt,
dprfascn,
prfadate
)
  tablespace pas_indx; 
