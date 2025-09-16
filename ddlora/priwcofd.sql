create table priwcomf
(
prwcinvn    varchar2(8),
dprwcunq    varchar2(8),
prwcname    varchar2(30),
prwcadd1    varchar2(25),
prwcadd2    varchar2(25),
prwcadd3    varchar2(25),
prwcpost    varchar2(4),
prwctele    varchar2(12),
prwcaccp    number(1,0),
prwcicod    varchar2(6),
prwcclmn    varchar2(20),
prwctime    varchar2(5),
prwccom1    varchar2(40),
prwccom2    varchar2(40),
prwcspar    varchar2(5),
lf          varchar2(1),
constraint priwcom1 primary key( 
prwcinvn,
dprwcunq)
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
create public synonym priwcomf for priwcomf;
create unique index priwcom2 on priwcomf
(
dprwcunq,
prwcinvn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
