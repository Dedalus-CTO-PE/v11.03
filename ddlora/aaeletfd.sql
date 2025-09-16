create table aaeletaf
(
  daeleltn    varchar2(3) default ' ' not null,
  daelelin    varchar2(3) default ' ' not null,
  aeletext    varchar2(70) default ' ' not null,
  aelelvar    number(1,0) default 0 not null,
  aelepbot    number(2,0) default 0 not null,
  aeleptop    number(2,0) default 0 not null,
  aeleppag    number(2,0) default 0 not null,
  aeleptab    number(2,0) default 0 not null,
  aelespar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaeleta1 primary key( 
daeleltn,
daelelin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index aaeleta2 on aaeletaf
(
daelelin,
daeleltn
)
  tablespace pas_indx; 
