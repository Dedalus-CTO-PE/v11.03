create table pmseadaf
(
pmadfbid    varchar2(3),
pmadarid    varchar2(20),
pmadfrid    varchar2(12),
pmadrptc    varchar2(3),
pmadcfec    varchar2(4),
pmadexpc    varchar2(3),
pmadcfet    varchar2(80),
pmadelnm    varchar2(127),
pmadmpid    varchar2(8),
pmadspar    varchar2(30),
lf          varchar2(1),
constraint pmseada1 primary key( 
pmadfbid,
pmadarid,
pmadfrid,
pmadrptc,
pmadcfec,
pmadexpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmseadaf for pmseadaf;
