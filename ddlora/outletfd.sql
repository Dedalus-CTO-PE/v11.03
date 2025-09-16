create table outletrf
(
  dotltltn    varchar2(3) default ' ' not null,
  dotltlin    varchar2(3) default ' ' not null,
  otlttext    varchar2(70) default ' ' not null,
  otltlvar    number(1,0) default 0 not null,
  otltpbot    number(2,0) default 0 not null,
  otltptop    number(2,0) default 0 not null,
  otltppag    number(3,0) default 0 not null,
  otltptab    number(2,0) default 0 not null,
  otltmmfn    varchar2(8) default ' ' not null,
  otlttype    varchar2(1) default ' ' not null,
  otltactv    varchar2(1) default ' ' not null,
  otltcomm    varchar2(1) default ' ' not null,
  otltconf    varchar2(1) default ' ' not null,
  otltspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outletr1 primary key( 
dotltltn,
dotltlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outletr2 on outletrf
(
dotltlin,
dotltltn
)
  tablespace pas_indx; 
