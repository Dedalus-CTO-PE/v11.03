create table allequaf
(
  aleqequi    char(10) default ' ' not null,
  aleqdesc    char(40) default ' ' not null,
  aleqloan    char(3) default ' ' not null,
  aleqtype    char(3) default ' ' not null,
  aleqsubt    char(3) default ' ' not null,
  aleqhome    char(3) default ' ' not null,
  aleqdept    char(3) default ' ' not null,
  aleqitem    char(9) default ' ' not null,
  aleqsupp    char(5) default ' ' not null,
  aleqprod    char(20) default ' ' not null,
  aleqseri    char(20) default ' ' not null,
  aleqstat    char(1) default ' ' not null,
  aleqsdat    char(8) default ' ' not null,
  aleqpdat    char(8) default ' ' not null,
  aleqmain    decimal(3,0) default 0 not null,
  alequnit    decimal(16,2) default 0 not null,
  aleqdepo    decimal(10,2) default 0 not null,
  aleqspec    char(1) default ' ' not null,
  aleqloau    char(1) default ' ' not null,
  aleqrdat    char(8) default ' ' not null,
  aleqcons    char(1) default ' ' not null,
  aleqcbal    decimal(8,0) default 0 not null,
  aleqreor    decimal(8,0) default 0 not null,
  aleqreqt    decimal(8,0) default 0 not null,
  aleqregn    char(2) default ' ' not null,
  aleqassn    char(12) default ' ' not null,
  aleqcdat    char(8) default ' ' not null,
  aleqctim    char(8) default ' ' not null,
  aleqcuid    char(10) default ' ' not null,
  alequdat    char(8) default ' ' not null,
  alequtim    char(8) default ' ' not null,
  alequuid    char(10) default ' ' not null,
  aleqactv    char(1) default ' ' not null,
  aleqpfee    decimal(10,2) default 0 not null,
  aleqspar    char(44) default ' ' not null,
  lf          char(1)
);
create unique index allequa1 on allequaf
(
aleqequi
);
create unique index allequa2 on allequaf
(
aleqloan,
aleqequi
);
create unique index allequa3 on allequaf
(
aleqdept,
aleqequi
);
create unique index allequa4 on allequaf
(
aleqdesc,
aleqequi,
aleqhome
);
create unique index allequa5 on allequaf
(
aleqhome,
aleqtype,
aleqequi
);
create unique index allequa6 on allequaf
(
aleqdept,
aleqdesc,
aleqequi
);
create unique index allequa7 on allequaf
(
aleqdept,
aleqtype,
aleqequi
);
revoke all on allequaf from public ; 
grant select on allequaf to public ; 
