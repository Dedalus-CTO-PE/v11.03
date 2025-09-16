create table pcpaudcr
(
  pccraudd    varchar2(8) default ' ' not null,
  pccraudt    varchar2(8) default ' ' not null,
  pccraudp    varchar2(2) default ' ' not null,
  pccraudr    varchar2(1) default ' ' not null,
  pccrauds    number(1,0) default 0 not null,
  pccraudo    varchar2(4) default ' ' not null,
  pccrctyp    varchar2(9) default ' ' not null,
  pccrclin    varchar2(9) default ' ' not null,
  pccrdiag    varchar2(9) default ' ' not null,
  pccrrelt    varchar2(9) default ' ' not null,
  pccrspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudcr on pcpaudcr
(
pccraudd,
pccraudt,
pccraudp,
pccraudr
)
tablespace pas_indx; 
create table pcpcrlaf
(
  pccrctyp    varchar2(9) default ' ' not null,
  pccrclin    varchar2(9) default ' ' not null,
  pccrdiag    varchar2(9) default ' ' not null,
  pccrrelt    varchar2(9) default ' ' not null,
  pccrspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpcrla1 primary key( 
pccrctyp,
pccrclin,
pccrdiag,
pccrrelt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
