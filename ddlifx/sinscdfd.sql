create table sinscdaf
(
sisdcon     char(10),
sisdsup     char(5),
sisdcat     char(7),
sisdsdt     char(8),
sisdsut     char(15),
sisduc1     decimal(16,4),
sisduc2     decimal(16,4),
sisduc3     decimal(16,4),
sisduc4     decimal(16,4),
sisdbq1     decimal(14,2),
sisdbq2     decimal(14,2),
sisdbq3     decimal(14,2),
sisdmqt     decimal(14,2),
sisdpo1     char(60),
sisdpo2     char(60),
sisdur1     char(15),
sisdur2     char(15),
sisdud1     char(8),
sisdud2     char(8),
sisduy1     char(1),
sisduy2     char(1),
sisdspa     char(20),
lf          char(1)
);
create unique index sinscda1 on sinscdaf
(
sisdcon,
sisdsup,
sisdcat,
sisdsdt,
sisdsut
);
create unique index sinscda2 on sinscdaf
(
sisdcat,
sisdsdt,
sisdsup,
sisdcon,
sisdsut
);
create unique index sinscda3 on sinscdaf
(
sisdsup,
sisdcat,
sisdsdt,
sisdcon,
sisdsut
);
revoke all on sinscdaf from public ; 
grant select on sinscdaf to public ; 
