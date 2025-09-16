create table sinoqaaf
(
  siqacst     varchar2(5) default ' ' not null,
  siqarid     varchar2(8) default ' ' not null,
  siqacat     varchar2(7) default ' ' not null,
  siqaunt     varchar2(15) default ' ' not null,
  siqapd      varchar2(30) default ' ' not null,
  siqapn      varchar2(30) default ' ' not null,
  siqaqty     number(14,2) default 0 not null,
  siqasta     varchar2(3) default ' ' not null,
  siqauid     varchar2(4) default ' ' not null,
  siqadat     varchar2(8) default ' ' not null,
  siqatim     varchar2(5) default ' ' not null,
  siqapor     varchar2(2) default ' ' not null,
  siqansmo    varchar2(10) default ' ' not null,
  siqansms    varchar2(3) default ' ' not null,
  siqaspa     varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinoqaa1 primary key( 
siqacst,
siqarid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
