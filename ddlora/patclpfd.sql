create table patclpaf
(
  ptclvisn    varchar2(8) default ' ' not null,
  ptclclty    varchar2(3) default ' ' not null,
  ptclinvn    varchar2(8) default ' ' not null,
  ptclsnam    varchar2(40) default ' ' not null,
  ptclgnam    varchar2(40) default ' ' not null,
  ptcladd1    varchar2(35) default ' ' not null,
  ptcladd2    varchar2(35) default ' ' not null,
  ptcladd3    varchar2(35) default ' ' not null,
  ptcladd4    varchar2(35) default ' ' not null,
  ptclpcod    varchar2(8) default ' ' not null,
  ptclpphn    varchar2(20) default ' ' not null,
  ptclbphn    varchar2(20) default ' ' not null,
  ptclmphn    varchar2(20) default ' ' not null,
  ptclemal    varchar2(80) default ' ' not null,
  ptclrltn    varchar2(10) default ' ' not null,
  ptclspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patclpa1 primary key( 
ptclvisn,
ptclclty,
ptclinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
