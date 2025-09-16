create table patifcaf
(
  ptfcclty    varchar2(3) default ' ' not null,
  ptfcfund    varchar2(6) default ' ' not null,
  ptfchtab    varchar2(3) default ' ' not null,
  ptfcrtyp    varchar2(1) default ' ' not null,
  ptfccmat    varchar2(9) default ' ' not null,
  ptfcctyp    varchar2(3) default ' ' not null,
  ptfcramt    number(14,2) default 0 not null,
  ptfcpamt    number(14,2) default 0 not null,
  ptfcspre    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patifca1 primary key( 
ptfcclty,
ptfcfund,
ptfchtab,
ptfcrtyp,
ptfccmat,
ptfcctyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patifca2 on patifcaf
(
ptfcfund,
ptfchtab,
ptfcclty,
ptfcrtyp,
ptfccmat,
ptfcctyp
)
  tablespace pas_indx; 
create unique index patifca3 on patifcaf
(
ptfcrtyp,
ptfccmat,
ptfcclty,
ptfcfund,
ptfchtab,
ptfcctyp
)
  tablespace pas_indx; 
create unique index patifca4 on patifcaf
(
ptfcrtyp,
ptfccmat,
ptfcfund,
ptfchtab,
ptfcclty,
ptfcctyp
)
  tablespace pas_indx; 
