create table pmseahaf
(
pmahfbid    varchar2(3),
pmaharid    varchar2(20),
pmahfrid    varchar2(12),
pmahrptc    varchar2(3),
pmahfscd    varchar2(4),
pmahfcid    varchar2(8),
pmahcfac    varchar2(1),
pmahtcam    varchar2(9),
pmahtbam    varchar2(9),
pmahexam    varchar2(9),
pmahcpam    varchar2(9),
pmahftid    varchar2(24),
pmahudte    varchar2(8),
pmahutim    varchar2(8),
pmahspar    varchar2(30),
lf          varchar2(1),
constraint pmseaha1 primary key( 
pmahfbid,
pmaharid,
pmahfrid,
pmahrptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmseahaf for pmseahaf;
create unique index pmseaha2 on pmseahaf
(
pmahftid,
pmahfbid,
pmaharid,
pmahfrid,
pmahrptc
)
  tablespace pas_indx; 
