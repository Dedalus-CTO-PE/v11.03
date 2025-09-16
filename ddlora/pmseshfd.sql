create table pmseshaf
(
pmshfbid    varchar2(3),
pmsharid    varchar2(20),
pmshfrid    varchar2(12),
pmshrptc    varchar2(3),
pmshscod    varchar2(11),
pmshsrvc    varchar2(3),
pmshsdsc    varchar2(80),
pmshnosv    varchar2(2),
pmshcamt    varchar2(9),
pmshfbam    varchar2(9),
pmshfdte    varchar2(8),
pmshtdte    varchar2(8),
pmshsdte    varchar2(8),
pmshspar    varchar2(30),
lf          varchar2(1),
constraint pmsesha1 primary key( 
pmshfbid,
pmsharid,
pmshfrid,
pmshrptc,
pmshscod,
pmshsrvc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmseshaf for pmseshaf;
