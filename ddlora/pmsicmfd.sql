create table pmsicmaf
(
pmicvisn    varchar2(8),
pmicinvn    varchar2(8),
pmiclnno    varchar2(3),
pmiccmnt    varchar2(100),
pmiccdat    varchar2(8),
pmicctim    varchar2(8),
pmiccuid    varchar2(10),
pmicudat    varchar2(8),
pmicutim    varchar2(8),
pmicuuid    varchar2(10),
pmicspar    varchar2(100),
lf          varchar2(1),
constraint pmsicma1 primary key( 
pmicvisn,
pmicinvn,
pmiclnno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsicmaf for pmsicmaf;
create unique index pmsicma2 on pmsicmaf
(
pmicinvn,
pmiclnno,
pmicvisn
)
  tablespace pas_indx; 
