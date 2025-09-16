create table sinccbaf
(
  sicbcst     varchar2(5) default ' ' not null,
  sicbdat     varchar2(6) default ' ' not null,
  sicbamt     number(14,2) default 0 not null,
  sicbbud     number(14,2) default 0 not null,
  sicbspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinccba1 primary key( 
sicbcst,
sicbdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
