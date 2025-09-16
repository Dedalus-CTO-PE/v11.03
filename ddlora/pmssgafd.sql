create table pmssgaaf
(
pmsgclmn    varchar2(3),
pmsghfnd    varchar2(6),
pmsghftb    varchar2(8),
pmsgicdc    varchar2(9),
pmsgclss    varchar2(3),
pmsgspar    varchar2(50),
lf          varchar2(1),
constraint pmssgaa1 primary key( 
pmsgclmn,
pmsghfnd,
pmsghftb,
pmsgicdc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmssgaaf for pmssgaaf;
