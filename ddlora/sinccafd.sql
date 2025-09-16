create table sinaudca
(
  sicaaudd    varchar2(8) default ' ' not null,
  sicaaudt    varchar2(8) default ' ' not null,
  sicaaudp    varchar2(2) default ' ' not null,
  sicaaudr    varchar2(1) default ' ' not null,
  sicaauds    number(1,0) default 0 not null,
  sicaaudo    varchar2(4) default ' ' not null,
  sicacode    varchar2(5) default ' ' not null,
  sicadesc    varchar2(40) default ' ' not null,
  sicatele    varchar2(12) default ' ' not null,
  sicacont    varchar2(35) default ' ' not null,
  sicagl      varchar2(14) default ' ' not null,
  sicaimpd    varchar2(7) default ' ' not null,
  sicadad1    varchar2(30) default ' ' not null,
  sicadad2    varchar2(30) default ' ' not null,
  sicadad3    varchar2(30) default ' ' not null,
  sicaloc     number(1,0) default 0 not null,
  sicames     varchar2(60) default ' ' not null,
  sicaur1     varchar2(15) default ' ' not null,
  sicaur2     varchar2(15) default ' ' not null,
  sicaud1     varchar2(8) default ' ' not null,
  sicaud2     varchar2(8) default ' ' not null,
  sicauc1     varchar2(3) default ' ' not null,
  sicauc2     varchar2(3) default ' ' not null,
  sicauy1     varchar2(1) default ' ' not null,
  sicauy2     varchar2(1) default ' ' not null,
  sicarid     varchar2(8) default ' ' not null,
  sicapacc    varchar2(12) default ' ' not null,
  sicaspa     varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudca on sinaudca
(
sicaaudd,
sicaaudt,
sicaaudp,
sicaaudr
)
tablespace pas_indx; 
create table sinccaaf
(
  sicacode    varchar2(5) default ' ' not null,
  sicadesc    varchar2(40) default ' ' not null,
  sicatele    varchar2(12) default ' ' not null,
  sicacont    varchar2(35) default ' ' not null,
  sicagl      varchar2(14) default ' ' not null,
  sicaimpd    varchar2(7) default ' ' not null,
  sicadad1    varchar2(30) default ' ' not null,
  sicadad2    varchar2(30) default ' ' not null,
  sicadad3    varchar2(30) default ' ' not null,
  sicaloc     number(1,0) default 0 not null,
  sicames     varchar2(60) default ' ' not null,
  sicaur1     varchar2(15) default ' ' not null,
  sicaur2     varchar2(15) default ' ' not null,
  sicaud1     varchar2(8) default ' ' not null,
  sicaud2     varchar2(8) default ' ' not null,
  sicauc1     varchar2(3) default ' ' not null,
  sicauc2     varchar2(3) default ' ' not null,
  sicauy1     varchar2(1) default ' ' not null,
  sicauy2     varchar2(1) default ' ' not null,
  sicarid     varchar2(8) default ' ' not null,
  sicapacc    varchar2(12) default ' ' not null,
  sicaspa     varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinccaa1 primary key( 
sicacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinccaa2 on sinccaaf
(
sicadesc,
sicacode
)
  tablespace pas_indx; 
