create table allequaf
(
  aleqequi    varchar2(10) default ' ' not null,
  aleqdesc    varchar2(40) default ' ' not null,
  aleqloan    varchar2(3) default ' ' not null,
  aleqtype    varchar2(3) default ' ' not null,
  aleqsubt    varchar2(3) default ' ' not null,
  aleqhome    varchar2(3) default ' ' not null,
  aleqdept    varchar2(3) default ' ' not null,
  aleqitem    varchar2(9) default ' ' not null,
  aleqsupp    varchar2(5) default ' ' not null,
  aleqprod    varchar2(20) default ' ' not null,
  aleqseri    varchar2(20) default ' ' not null,
  aleqstat    varchar2(1) default ' ' not null,
  aleqsdat    varchar2(8) default ' ' not null,
  aleqpdat    varchar2(8) default ' ' not null,
  aleqmain    number(3,0) default 0 not null,
  alequnit    number(16,2) default 0 not null,
  aleqdepo    number(10,2) default 0 not null,
  aleqspec    varchar2(1) default ' ' not null,
  aleqloau    varchar2(1) default ' ' not null,
  aleqrdat    varchar2(8) default ' ' not null,
  aleqcons    varchar2(1) default ' ' not null,
  aleqcbal    number(8,0) default 0 not null,
  aleqreor    number(8,0) default 0 not null,
  aleqreqt    number(8,0) default 0 not null,
  aleqregn    varchar2(2) default ' ' not null,
  aleqassn    varchar2(12) default ' ' not null,
  aleqcdat    varchar2(8) default ' ' not null,
  aleqctim    varchar2(8) default ' ' not null,
  aleqcuid    varchar2(10) default ' ' not null,
  alequdat    varchar2(8) default ' ' not null,
  alequtim    varchar2(8) default ' ' not null,
  alequuid    varchar2(10) default ' ' not null,
  aleqactv    varchar2(1) default ' ' not null,
  aleqpfee    number(10,2) default 0 not null,
  aleqspar    varchar2(44) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allequa1 primary key( 
aleqequi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allequa2 on allequaf
(
aleqloan,
aleqequi
)
  tablespace pas_indx; 
create unique index allequa3 on allequaf
(
aleqdept,
aleqequi
)
  tablespace pas_indx; 
create unique index allequa4 on allequaf
(
aleqdesc,
aleqequi,
aleqhome
)
  tablespace pas_indx; 
create unique index allequa5 on allequaf
(
aleqhome,
aleqtype,
aleqequi
)
  tablespace pas_indx; 
create unique index allequa6 on allequaf
(
aleqdept,
aleqdesc,
aleqequi
)
  tablespace pas_indx; 
create unique index allequa7 on allequaf
(
aleqdept,
aleqtype,
aleqequi
)
  tablespace pas_indx; 
