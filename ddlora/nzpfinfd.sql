create table nzpfinaf
(
  nzfihosp    varchar2(3) default ' ' not null,
  nzfisyst    varchar2(1) default ' ' not null,
  nzfisite    varchar2(6) default ' ' not null,
  nzfiyear    varchar2(4) default ' ' not null,
  nzfitype    varchar2(1) default ' ' not null,
  nzficode    varchar2(13) default ' ' not null,
  nzfiperd    number(16,2) default 0 not null,
  nzfimth1    number(16,2) default 0 not null,
  nzfimth2    number(16,2) default 0 not null,
  nzfimth3    number(16,2) default 0 not null,
  nzfimth4    number(16,2) default 0 not null,
  nzfimth5    number(16,2) default 0 not null,
  nzfimth6    number(16,2) default 0 not null,
  nzfimth7    number(16,2) default 0 not null,
  nzfimth8    number(16,2) default 0 not null,
  nzfimth9    number(16,2) default 0 not null,
  nzfimt10    number(16,2) default 0 not null,
  nzfimt11    number(16,2) default 0 not null,
  nzfimt12    number(16,2) default 0 not null,
  nzfimt13    number(16,2) default 0 not null,
  nzfilsyr    number(16,2) default 0 not null,
  nzfispar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpfina1 primary key( 
nzfisyst,
nzfisite,
nzfiyear,
nzfitype,
nzficode,
nzfihosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzpfina2 on nzpfinaf
(
nzfihosp,
nzfisyst,
nzfisite,
nzfiyear,
nzfitype,
nzficode
)
  tablespace pas_indx; 
