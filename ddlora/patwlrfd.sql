create table pataudwr
(
ptwraudd    varchar2(8),
ptwraudt    varchar2(8),
ptwraudp    varchar2(2),
ptwraudr    varchar2(1),
ptwrauds    number(1,0),
ptwraudo    varchar2(4),
ptwrresi    varchar2(3),
ptwrcomp    varchar2(3),
ptwrward    varchar2(3),
ptwrdept    varchar2(3),
ptwrprdy    number(14,2),
ptwrpdes    varchar2(20),
ptwrexdy    number(14,2),
ptwredes    varchar2(20),
ptwrspar    varchar2(14),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym pataudwr for pataudwr;
create index pataudwr on pataudwr
(
ptwraudd,
ptwraudt,
ptwraudp,
ptwraudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table patwlraf
(
ptwrresi    varchar2(3),
ptwrcomp    varchar2(3),
ptwrward    varchar2(3),
ptwrdept    varchar2(3),
ptwrprdy    number(14,2),
ptwrpdes    varchar2(20),
ptwrexdy    number(14,2),
ptwredes    varchar2(20),
ptwrspar    varchar2(14),
lf          varchar2(1),
constraint patwlra1 primary key( 
ptwrresi,
ptwrcomp,
ptwrward,
ptwrdept)
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
create public synonym patwlraf for patwlraf;
