create table prictcaf
(
prctinvn    varchar2(8),
dprctuni    varchar2(8),
prctsnam    varchar2(30),
prctsad1    varchar2(35),
prctsad2    varchar2(35),
prctsad3    varchar2(35),
prctsad4    varchar2(35),
prctspco    varchar2(8),
prctsphn    varchar2(12),
prctcont    varchar2(30),
prctrefn    varchar2(20),
prctspar    varchar2(20),
lf          varchar2(1),
constraint prictca1 primary key( 
prctinvn,
dprctuni)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym prictcaf for prictcaf;
create unique index prictca2 on prictcaf
(
dprctuni,
prctinvn
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
