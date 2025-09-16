create table csmaudia
(
csiaaudd    char(8),
csiaaudt    char(8),
csiaaudp    char(2),
csiaaudr    char(1),
csiaauds    decimal(1,0),
csiaaudo    char(4),
csiacat     char(7),
csiades     char(60),
csiasub     char(5),
csiaiss     char(15),
csiasti     char(6),
csiaavc     decimal(18,6),
csianat     char(10),
csiaabc     char(1),
csiapsc     char(5),
csiarex     decimal(1,0),
csianon     decimal(1,0),
csiasab     decimal(1,0),
csiasus     decimal(1,0),
csiadtc     char(8),
csiatmc     char(5),
csiausc     char(4),
csiaur1     char(25),
csiaur2     char(25),
csiaud1     char(8),
csiaud2     char(8),
csiauy1     char(1),
csiauy2     char(1),
csiaspa     char(20),
lf          char(1)
);
create index csmaudia on csmaudia
(
csiaaudd,
csiaaudt,
csiaaudp,
csiaaudr
);
revoke all on csmaudia from public ; 
grant select on csmaudia to public ; 
create table csmciaaf
(
csiacat     char(7),
csiades     char(60),
csiasub     char(5),
csiaiss     char(15),
csiasti     char(6),
csiaavc     decimal(18,6),
csianat     char(10),
csiaabc     char(1),
csiapsc     char(5),
csiarex     decimal(1,0),
csianon     decimal(1,0),
csiasab     decimal(1,0),
csiasus     decimal(1,0),
csiadtc     char(8),
csiatmc     char(5),
csiausc     char(4),
csiaur1     char(25),
csiaur2     char(25),
csiaud1     char(8),
csiaud2     char(8),
csiauy1     char(1),
csiauy2     char(1),
csiaspa     char(20),
lf          char(1)
);
create unique index csmciaa1 on csmciaaf
(
csiacat
);
revoke all on csmciaaf from public ; 
grant select on csmciaaf to public ; 
