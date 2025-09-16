create table allletaf
(
  dalltltn    varchar2(3) default ' ' not null,
  dalltlin    varchar2(3) default ' ' not null,
  allttext    varchar2(70) default ' ' not null,
  alltlvar    number(1,0) default 0 not null,
  alltpbot    number(2,0) default 0 not null,
  alltptop    number(2,0) default 0 not null,
  alltppag    number(3,0) default 0 not null,
  alltptab    number(2,0) default 0 not null,
  alltmmfn    varchar2(8) default ' ' not null,
  allttype    varchar2(1) default ' ' not null,
  alltactv    varchar2(1) default ' ' not null,
  alltspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allletr1 primary key( 
dalltltn,
dalltlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allletr2 on allletaf
(
dalltlin,
dalltltn
)
  tablespace pas_indx; 
