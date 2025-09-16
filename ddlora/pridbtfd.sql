create table priauddb
(
prdbaudd    varchar2(8),
prdbaudt    varchar2(8),
prdbaudp    varchar2(2),
prdbaudr    varchar2(1),
prdbauds    number(1,0),
prdbaudo    varchar2(4),
prdbdebt    varchar2(8),
prdbsnam    varchar2(20),
prdbgnam    varchar2(25),
prdbtitl    varchar2(4),
prdbadd1    varchar2(25),
prdbadd2    varchar2(25),
prdbadd3    varchar2(25),
prdbpost    varchar2(4),
prdbtelp    varchar2(12),
prdbtelb    varchar2(12),
prdbposn    varchar2(20),
prdbrnam    varchar2(45),
prdbrad1    varchar2(25),
prdbrad2    varchar2(25),
prdbrad3    varchar2(25),
prdbrpos    varchar2(4),
prdbrtep    varchar2(12),
prdbrteb    varchar2(12),
prdbrrel    varchar2(10),
prdbfund    varchar2(6),
prdbtabl    varchar2(8),
prdbmemn    varchar2(10),
prdbextc    varchar2(3),
prdbdcrt    number(14,2),
prdbmedn    varchar2(10),
prdbbadd    number(1,0),
prdbhold    number(1,0),
prdbudf1    varchar2(3),
prdbudf2    varchar2(3),
prdbudf3    varchar2(3),
prdbudf4    varchar2(3),
prdblock    varchar2(2),
prdbadmn    varchar2(3),
prdbdobh    varchar2(8),
prdbexur    varchar2(8),
prdbspar    varchar2(7),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym priauddb for priauddb;
create index priauddb on priauddb
(
prdbaudd,
prdbaudt,
prdbaudp,
prdbaudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table pridebtf
(
prdbdebt    varchar2(8),
prdbsnam    varchar2(20),
prdbgnam    varchar2(25),
prdbtitl    varchar2(4),
prdbadd1    varchar2(25),
prdbadd2    varchar2(25),
prdbadd3    varchar2(25),
prdbpost    varchar2(4),
prdbtelp    varchar2(12),
prdbtelb    varchar2(12),
prdbposn    varchar2(20),
prdbrnam    varchar2(45),
prdbrad1    varchar2(25),
prdbrad2    varchar2(25),
prdbrad3    varchar2(25),
prdbrpos    varchar2(4),
prdbrtep    varchar2(12),
prdbrteb    varchar2(12),
prdbrrel    varchar2(10),
prdbfund    varchar2(6),
prdbtabl    varchar2(8),
prdbmemn    varchar2(10),
prdbextc    varchar2(3),
prdbdcrt    number(14,2),
prdbmedn    varchar2(10),
prdbbadd    number(1,0),
prdbhold    number(1,0),
prdbudf1    varchar2(3),
prdbudf2    varchar2(3),
prdbudf3    varchar2(3),
prdbudf4    varchar2(3),
prdblock    varchar2(2),
prdbadmn    varchar2(3),
prdbdobh    varchar2(8),
prdbexur    varchar2(8),
prdbspar    varchar2(7),
lf          varchar2(1),
constraint pridebt1 primary key( 
prdbdebt)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pridebtf for pridebtf;
create unique index pridebt2 on pridebtf
(
prdbsnam,
prdbgnam,
prdbdebt
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
